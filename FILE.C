#include<stdio.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("data.text" ,"w");
if(fp==NULL)
{
printf("error");
}
fprintf(fp,"\n my c program journey.\n at starting it was similar to python and c++ which I was learned  in my schoolday but it has some changes our trainer explained it clearly. so, now we clearing leetcode problems ,we learn c program step by step. it was actually very good for our journey. programing languages are the language to speak with computer like our new friends.so learning c program was actually good.(^-^)");
fclose(fp);
fp=NULL;
fp=fopen("data.text","r");
if(fp==NULL)
{
printf("error");
}
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
fp=NULL;
fp=fopen("data.text","a");
if(fp==NULL)
{
printf("error");
}
fprintf(fp,"\n As a c program trainer he gave his best .he is a good trainer. he teaches us very well.he clears every single doubts if we ask it twice or thrice he explain it very clearly. he gave his full effect to make us good programmer.according to me he's agood teacher.our trainer/teacher is the best!!!!!(^ o ^)  ");
fclose(fp);
fp=NULL;
return 0;
}