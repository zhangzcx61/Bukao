#include<iostream> //输入输出
#include<cstring>  //字符串  
#include<stack>    //栈 
#include<algorithm> // 成员模版函数
#include<cmath>    //
#include<ctime> //计时 
using namespace std;    
    
stack<char> s1,s2;    //定义三个栈，用于进行分块运算 
stack<double> s3;    
char ch[150]={0};//存表达式    
double num[11];//暂时存数字    
          
double priority(char ch)//用于比较字符优先级    
{    
    if(ch==')'||ch=='(') return 1;    
    if(ch=='+'||ch=='-') return 2;    
    if(ch=='*'||ch=='/') return 3;         
}    
         
double SimpleOperation(double x,double y,char ope)//两个数的运算    
{    
    if(ope=='+') return x+y;    
    if(ope=='-') return x-y;    
    if(ope=='*') return x*y;    
    if(ope=='/'&&y!=0) return x/y;    
} 
/****************************************************************************************/  
void Transform(double n)//将中缀表达式转化为后缀表达式    
{    
    int k=0;    
    for(int i=0;i<n;i++)       //开始扫描 
        if(ch[i]>='0'&&ch[i]<='9')//当是数字的情况       
            if(i+1<n&&(ch[i+1]<'0'||ch[i+1]>'9')||i==n-1)//当是最后一个数字，或下一个元素是运算符    
            {    
                s2.push(ch[i]);    //数字时，直接加入后缀表达式 
                s2.push('#');    
            }    
            else    
                s2.push(ch[i]);     
        else   //如果是运算符 则存在三种情况  
            if(s1.empty()||ch[i]=='('||priority(ch[i])>priority(s1.top()))    
                s1.push(ch[i]);                 
            else if(ch[i]==')')//若为')'入栈，    
            {    
                while(s1.top()!='(')  //  直至出现'('，pop'(' 
                {    
                    s2.push(s1.top());      
                    s1.pop();    
                }    
                s1.pop();    
            }    
            else//当运算符优先级小于或等于S1栈顶运算符的优先级  
            {    //当其优先级高于除'('以外的栈顶运算符时，直接入栈。 
                while(!s1.empty()&&priority(ch[i])<=priority(s1.top())&&s1.top()!='(')//这里还要注意两个界限    
                {    
                    s2.push(s1.top());    
                    s1.pop();               
                }    //优先度高或相等 pop , 优先度低或者遇到'('  Push 
                s1.push(ch[i]);     
            }       
    while(!s1.empty())//当表达式结束    
    {    
        s2.push(s1.top());    
        s1.pop();           
    }    
    while(!s2.empty()) //将栈内元素放回S2中    
    {    
        ch[k++]=s2.top();    
        s2.pop();       
    }    
    reverse(ch,ch+k);//将ch[]反向    
    ch[k]=0;    
}    
    
double Cal(double n)//后缀表达式计算    
{    
    double x,y;
	int tmp=0,k=0;    
    for(int i=0;i<n;i++)       
        if(ch[i]=='#')//是#直接跳过    
            continue;    
        else if(ch[i]=='+'||ch[i]=='-'||ch[i]=='*'||ch[i]=='/')//是运算符弹出栈顶两元素计算后放回栈    
        {    
            x=s3.top();    
            s3.pop();    
            y=s3.top();    
            s3.pop();    
            x=SimpleOperation(y,x,ch[i]);    
            s3.push(x);    
        }    
        else//是数字字符       
            if(ch[i+1]=='#')//下一个元素是#    
            {    
                num[k++]=ch[i]-'0';    
                for(int i=0;i<k;i++)    
                    tmp+=(num[i]*(double)pow(10,k-i-1));    
                s3.push(tmp);    
                tmp=0;    
                k=0;                    
            }    
            else//下一个元素不是#       
                num[k++]=ch[i]-'0';                  
    return s3.top();    
}    


int main(void)    
{   
	char flag = 'Y';						// 判断是否继续录入的标志, 初始化为'Y'
while (toupper(flag) == 'Y')
	{

	cout<<"Purpose: show  the basic oprations for the calculating machine"<<endl;
	cout<<"1.doubleput data"<<endl;
	cout<<"2. Exit the fiction"<<endl;
	int select;
	//scanf("%d",&select);
	cin>>select;
	cout<<"Your choice is "<<select<<endl;
	switch(select)
	{
	case 1:
	cout<<"Now please doubleput your expression"<<endl;	
    cin>>ch;	 
    Transform(strlen(ch)); 
	s2.push(0);
	s3.push(0);
    cout<<Cal(strlen(ch))<<endl; 
     break;
	case 2:
		cout<<"Exit"<<endl;
		return 0;
	default:							// 其它情况, 表示选择有误
		cout << "选择有误!"<< endl;
		break;

	}
	cout << endl << "Whether to continue typing expression?(Y/N)";
	cin >> flag;		

	}
	system("PAUSE");            			// 调用库函数system( )
    return 0;    
}    
