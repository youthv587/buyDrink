#include<iostream.h>
int buyDrink(int money){
int emptyD,numD,capD;
emptyD=0,numD=0,capD=0;
if(money%2==0){
    numD=money/2;}
else{
    money--,numD=money/2;}
emptyD=numD,capD=numD;
while(emptyD>=2||capD>=4){
    numD+=emptyD/2,capD+=emptyD/2,emptyD=emptyD/2+emptyD%2;//ø’∆øªª“˚¡œ
    numD+=capD/4,emptyD+=capD/4,capD=capD/4+capD%4;//∆ø∏«ªª“˚¡œ
}
cout<<"emptyD="<<emptyD<<endl;
cout<<"capD="<<capD<<endl;
return numD;
}

int main(){
int money;
cout<<"money=";
cin>>money;
int num=buyDrink(money);
cout<<"num="<<num<<endl;

return 0;
}