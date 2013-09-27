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
	cout<<"选择操作"<<endl<<"1查看名单\t"<<"2添加学生\t"<<"3删除学生\t"<<"4录入成绩\t"<<"5结束"<<endl;
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
cout<<"请输入学生姓名"<<endl;
cin>>students[i].name;
cout<<"请输入第一门课的名称"<<endl;
cin>>students[i].classname1;
cout<<"请输入第一门课成绩"<<endl;
cin>>students[i].class1fs;
cout<<"请输入第二门课的名称"<<endl;
cin>>students[i].classname2;
cout<<"请输入第二门课成绩"<<endl;
cin>>students[i].class2fs;
cout<<"如果输入结束，请按任意键结束,如果要继续输入，则输入go"<<endl;
cin>>a;
if(a!="go")return ;
}
}
void deleted(){
	int i=0;string name;
	cout<<"请输入删除学生的名字"<<endl;
	cin>>name;
	while(students[i].name!="\0"){
	if(students[i].name==name)
		{students[i].name ="deleted";
	
	cout<<"删除成功";break;
	}else cout<<"不存在这个学生";
	  i++;
	}
}
void sorce(){
int i=0;
string add,addname;
cout<<"若学生没有加入 ,输入 return 返回,若学生已经加入，输入add登成绩"<<endl;
cin>>add;
if(add=="return")return ;
else
	if(add=="add")
while(true){
	i=0;
cout<<"请输入学生姓名"<<endl;
cin>>addname;
while(true){
	if(students[i].name==addname){
cout<<"请输入课程一名字"<<endl;
cin>>students[i].classname1 ;
cout<<"请输入课程一的分数"<<endl;
cin>>students[i].class1fs ;
cout<<"请输入课程二名字"<<endl;
cin>>students[i].classname1 ;
cout<<"请输入课程二的分数"<<endl;
cin>>students[i].class2fs ;
	cout<<"若加入结束 ,输入 return 返回,继续则输入add登成绩"<<endl;
cin>>add;
if(add=="return")return ;
	}else{cout<<"这个学生不存在请先加入";return;}


}
}
cout<<"若要登录成绩请输入add"<<endl;


}