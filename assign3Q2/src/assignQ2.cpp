#include <iostream>
using namespace std;

class Matrix
{
private:
	int row,col;
	int **mat=NULL;
public:
	void Accept(int a);
	Matrix(int r,int c);
	void Print(int a);
	void Addition(Matrix p,Matrix q);
	void Subtraction(Matrix p,Matrix q);
	void Multiplication(Matrix p,Matrix q);
	void Transpose();

};
Matrix::Matrix(int r,int c)
{
	row=r;
	col=c;
//	cout<<row<<col;
	mat=new int*[row];
	for(int i=0;i<row;i++)
	{
		mat[i]=new int(col);
	}
}
void Matrix::Accept(int a)
{
	cout<<"\nEnter Element " <<row*col<<" of Matrix "<<a<<":"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>mat[i][j];
		}
	}

}
void Matrix::Print(int a=3)
{
	cout<<"Matrix "<<a<<":"<<endl;
	for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cout<<mat[i][j]<<"  ";
			}
			cout<<endl;
		}
}
void Matrix::Addition(Matrix p,Matrix q)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			mat[i][j]=p.mat[i][j]+q.mat[i][j];
		}
	}
	cout<<"After Addition:"<<endl;
	for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					cout<<mat[i][j]<<"  ";
				}
				cout<<endl;
			}

}
void Matrix::Multiplication(Matrix p,Matrix q)
{
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
		{
			q.mat[i][j]=q.mat[j][i];
		}
		cout<<endl;
	}

	for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				mat[i][j]=0;
			   for(int k=0;k<row;k++)
	    		{
				mat[i][j]+=p.mat[i][k]*q.mat[k][j];
				}
			}
		}
		cout<<"After Multiplication:"<<endl;
		for(int i=0;i<row;i++)
				{
					for(int j=0;j<col;j++)
					{
						cout<<mat[i][j]<<"  ";
					}
					cout<<endl;
				}
}
void Matrix::Subtraction(Matrix p,Matrix q)
{
	for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				mat[i][j]=p.mat[i][j]-q.mat[i][j];
			}
		}
		cout<<"After Subtraction:"<<endl;
		for(int i=0;i<row;i++)
				{
					for(int j=0;j<col;j++)
					{
						cout<<mat[i][j]<<"  ";
					}
					cout<<endl;
				}
}
void Matrix::Transpose()
{
	cout<<"Transpose of Matrix: "<<endl;
	for(int i=0;i<col;i++)
					{
						for(int j=0;j<row;j++)
						{
							cout<<mat[j][i]<<"  ";
						}
						cout<<endl;
					}

}
int main()
{
	int ch,r,c;

	cout<<"Enter Size of Matrix(row & col): ";
	cin>>r>>c;
	Matrix m1(r,c);
	Matrix m2(r,c);
	Matrix m3(r,c);
	do
	{
		cout<<"\n1.Accept\n2.Print Matrix\n3.Addition\n4.subtraction\n5.Multiplcation\n6.Transpose\n7.Exit\nEnter choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
		  m1.Accept(1);
		  m2.Accept(2);
			break;
		case 2:
			m1.Print(1);
			m2.Print(2);
			break;
		case 3:
			m3.Addition(m1,m2);
			break;
		case 4:
			m3.Subtraction(m1,m2);
			break;
		case 5:
			m3.Multiplication(m1,m2);
			break;
		case 6:
			m1.Transpose();
			m2.Transpose();
			break;
		case 7:
			cout<<"\nBye";
			break;
		default:cout<<"\nEnter Correct Option";
		}
	}while(ch!=7);
	return 0;
}
