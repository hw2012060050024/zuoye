#include<iostream>
#include<string>
using namespace std;
void check();
void add();
void deleted();
void sorce();
struct student{
string name,classname1,classname2;
float  class1fs,class2fs;
}students[100];

int main(){
	//memset(&students,0,sizeof( struct student )*100);
	//memset(&students,0,sizeof( int )*100);
	for(int n=0;n<=99;n++){
		students[n].name="";
	}
	students[0].name="huangwen";
	int n;
	while(1){
	cout<<"ѡ�����"<<endl<<"1�鿴����\t"<<"2���ѧ��\t"<<"3ɾ��ѧ��\t"<<"4¼��ɼ�\t"<<"5����"<<endl;
	cin>>n;
	switch (n)
	{case 1: check() ;break;
	case 2: add();  break;
	case 3: deleted();  break;
    case 4: sorce(); break;
	case 5: return 0 ;break;
	
	default:
		break;
	}
	}
	return 0 ;
	
}
void check()
{
int i=0;
while(students[i].name!="\0"&&students[i].name!="deleted"){
	cout<<students[i].name<<endl<<students[i].classname1<<":"<<"\t"<<students[i].class1fs<<endl<<students[i].classname2<<":"<<"\t"<<students[i].class2fs<<endl;
i++;}
}
void add()
{
	string a;
int i=0;
while(true){
while (students[i].name!="\0"&&students[i].name!="deleted")i++;
cout<<"������ѧ������"<<endl;
cin>>students[i].name;
cout<<"�������һ�ſε�����"<<endl;
cin>>students[i].classname1;
cout<<"�������һ�ſγɼ�"<<endl;
cin>>students[i].class1fs;
cout<<"������ڶ��ſε�����"<<endl;
cin>>students[i].classname2;
cout<<"������ڶ��ſγɼ�"<<endl;
cin>>students[i].class2fs;
cout<<"�������������밴���������,���Ҫ�������룬������go"<<endl;
cin>>a;
if(a!="go")return ;
}
}
void deleted(){
	int i=0;string name;
	cout<<"������ɾ��ѧ��������"<<endl;
	cin>>name;
	while(students[i].name!="\0"){
	if(students[i].name==name)
		{students[i].name ="deleted";
	
	cout<<"ɾ���ɹ�";break;
	}else cout<<"���������ѧ��";
	  i++;
	}
}
void sorce(){
int i=0;
string add,addname;
cout<<"��ѧ��û�м��� ,���� return ����,��ѧ���Ѿ����룬����add�ǳɼ�"<<endl;
cin>>add;
if(add=="return")return ;
else
	if(add=="add")
while(true){
	i=0;
cout<<"������ѧ������"<<endl;
cin>>addname;
while(true){
	if(students[i].name==addname){
cout<<"������γ�һ����"<<endl;
cin>>students[i].classname1 ;
cout<<"������γ�һ�ķ���"<<endl;
cin>>students[i].class1fs ;
cout<<"������γ̶�����"<<endl;
cin>>students[i].classname1 ;
cout<<"������γ̶��ķ���"<<endl;
cin>>students[i].class2fs ;
	cout<<"��������� ,���� return ����,����������add�ǳɼ�"<<endl;
cin>>add;
if(add=="return")return ;
	}else{cout<<"���ѧ�����������ȼ���";return;}


}
}
cout<<"��Ҫ��¼�ɼ�������add"<<endl;


}