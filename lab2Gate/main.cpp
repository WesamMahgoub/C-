#include <iostream>
using namespace std;

#define TestCase0
#define TestCase1
#define TestCase2

//A gate in a digital ciruit
class Gate
{
	private:
		bool * input;    // to points to an array that holds the Gate inputs value
		int n;    // Number of Gate inputs
	public:
		//NOI : Number of inputs
		//Constructor that make "input" array and initiates all inputs to false
		Gate(int NOI): n(NOI)
		{
		    input= new bool[n];
		    for(int i=0;i<n;i++)
		    {
		        input[i]=0;
		    }
		}
		//sets the input with index "ind" to the value "value"
		virtual void SetInput(int ind,bool value)
		{
		    input[ind]= value;
		}
		//returns the value of input with index "ind"
		virtual bool GetInput(int ind)
		{
		    return input[ind];
		}
		//returns the total number of inputs
		virtual int GetNumberOfInputs()
		{
		    return n;
		}
};

//An "OR" gate with NOI input
//It stores no more data
class OR : public Gate
{
public:
	//NOI : Number of inputs
	//Constructor that make a "Gate" with NOI inputs
	OR(int NOI) :Gate(NOI)
	{

	}
	//function that return the output of the Gate
	bool output()
	{
	    for(int i=0;i<GetNumberOfInputs();i++)
	    {
	        if(GetInput(i)==1)
	        return true;
	    }
	    return false;
	}
};
//An "AND" gate with NOI input
//It stores no more data
class AND : public Gate
{
public:
	//NOI : Number of inputs
	//Constructor that make a "Gate" with NOI inputs
	AND(int NOI): Gate(NOI)
	{
	}
	//function that return the output of the Gate
	bool output()
	{
	    for(int i=0;i<GetNumberOfInputs();i++)
	    {
	        if(GetInput(i)==0)
	        return false;
	    }
	    return true;
	}
};
//A "NOT" gate
//It stores no more data
//Remember that it has just one input and take care that it privately inherited Gate
class NOT : private Gate
{
public:
	//Constructor that make a "Gate" with 1 input
	NOT():Gate(1)
	{
	}
	// function to set the value of the gate input
	void SetInput(bool value)
	{
	    Gate::SetInput(0,value);
	}
	// function to return the value of the gate input
	bool GetInput()
	{
	   return Gate::GetInput(0);
	}
	// function to return the value of the gate output
	bool output()
	{
	    return !(Gate::GetInput(0));
	}
};
class XOR: public Gate
{
    public:
    XOR(int NOI): Gate(NOI)
	{
	}
	bool output()
	{
	    int sum = 0;
	    for(int i=0;i<GetNumberOfInputs();i++)
	    {
	        sum += GetInput(i);
	    }
	    if(sum%2 == 0)
	        return false;

	    return true;
	}
};
class FA: public Gate
{
    private:
    AND AN1;
    AND AN2;
    OR O1;
    XOR X1;
    XOR X2;
    public:
    FA(): Gate(3),AN1(2),AN2(2),O1(2),X1(2),X2(2)
    {

    }
    int sum()
    {
        for(int A=0;A<2;A++)
        {
            for(int B=0;B<2;B++)
            {
                for(int Cin=0;Cin<2;Cin++)
                {
        X1.SetInput(0,A);
        X1.SetInput(1,B);
        X2.SetInput(0,X1.output());
        X2.SetInput(1,Cin);
        X2.output();
                }
            }
        }
    }
    int carry()
    {
        for(int A=0;A<2;A++)
        {
            for(int B=0;B<2;B++)
            {
                for(int Cin=0;Cin<2;Cin++)
                {
        AN1.SetInput(0,A);
        AN1.SetInput(1,B);
        AN2.SetInput(0,Cin);
        AN2.SetInput(1,X1.output());
        O1.SetInput(0,AN1.output());
        O1.SetInput(0,AN2.output());
        O1.output();
                }
            }
        }
    }
};

enum {XORInputCount=3, TableSize=8};
int lgtt_array[TableSize]={0};

int main()
{
      //add your code to tabulate the truth table of the given digital circuit
    OR F(2);
    AND A1(3);
    AND A2(3);
    NOT N1,N2,N3;
    for(int x=0;x<2;x++)
    {
        for(int y=0;y<2;y++)
        {
            for(int z=0;z<2;z++)
            {
                N1.SetInput(x);
                N2.SetInput(z);
                N3.SetInput(y);
                A1.SetInput(0,N1.output());
                A1.SetInput(1,y);
                A1.SetInput(2,N2.output());
                A2.SetInput(0,x);
                A2.SetInput(1,N3.output());
                A2.SetInput(2,z);
                F.SetInput(0,A1.output());
                F.SetInput(1,A2.output());
                cout << F.output() << endl;
                lgtt_array[z+y*2+x*4]=F.output();
            }
        }
    }

#ifdef TestCase0
/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
    int lgtt=36;
    bool lgtc=0;
    bool xortc=0;
    bool fatc=0;

    //EndOfLogicCircuitTruthTable
    cout<<"Logic Circuit TruthTable.\n";
    for (int i=0; i<TableSize; i++)
    {
        bool val=lgtt & (1<<i);
        if(lgtt_array[i]!=val)
        {
            cout<<"TestCase0: failed. \n\n\n";
            lgtc=false;
            break;
        }
        lgtc=true;
    }
    if(lgtc)
        cout<<"TestCase0: passed. \n\n\n";
#endif // TestCase0

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
#ifdef TestCase1
    XOR xorgate(XORInputCount);
    cout<<"XOR TruthTable.\n";
    for (int i=0; i<TableSize; i++)
    {
        for (int inputIndex=0; inputIndex<XORInputCount; inputIndex++)
        {
            bool val = i & (1<<inputIndex);
            if(!inputIndex)
                xortc=val;
            else
                xortc^=val;
            xorgate.SetInput(inputIndex, val);
        }
        if(xorgate.output()!=xortc)
        {
            cout<<"TestCase1: failed. \n\n\n";
            xortc=false;
            break;
        }
        xortc=true;
    }
    if(xortc)
        cout<<"TestCase1: passed. \n\n\n";
#endif // TestCase1

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
#ifdef TestCase2
    FA fa;
    cout<<"FA TruthTable.\n";
    for (int i=0; i<TableSize; i++)
    {
        int mathSum=0;
        bool carryBit=0, sumBit=0;
        for (int inputIndex=0; inputIndex<XORInputCount; inputIndex++)
        {
            bool val = i & (1<<inputIndex);
            mathSum+=val;
            fa.SetInput(inputIndex, val);
        }
        carryBit=mathSum>>1;
        sumBit=mathSum&1;
        if(fa.carry()!=carryBit  || fa.sum()!= sumBit)
        {
            cout<<"TestCase2: failed. \n\n\n";
            fatc=false;
            break;
        }
        fatc=true;
    }
    if(fatc)
        cout<<"TestCase2: passed. \n\n\n";
#endif // TestCase2
/*------------------------------------------------------------*/
/*------------------------------------------------------------*/

    return 0;
}
