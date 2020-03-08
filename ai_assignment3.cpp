#include <bits/stdc++.h>
using namespace std;
struct st{
    float marks;
    int gp;
};

int main() {
	int n;
	float sum1=0,sum2=0,sum3=0,count1=0,count2=0,count3=0;
	cin>>n;
	float chromosome[3];
	struct st A[n];
	for(int i=0;i<n;i++){
	    cin>>A[i].marks;
	    A[i].gp=(i%3)+1;
	    if(A[i].gp==1){
	        sum1+=A[i].marks;
	        count1++;
	    }
	    if(A[i].gp==2){
	        sum2+=A[i].marks;
	        count2++;
	    }
	    if(A[i].gp==3){
	        sum3+=A[i].marks;
	        count3++;
	    }
	}
	    chromosome[0]=sum1/count1;
	    chromosome[1]=sum2/count2;
	    chromosome[2]=sum3/count3;
	    cout<<"grp representative in generation 0 are "<<chromosome[0]<<"   "<<chromosome[1]<<"  "<<chromosome[2]<<"\t";
		for(int i=0;i<n;i++){
	        cout<<A[i].gp<<"  ";
	    }
	for(int k=0;k<15;k++){
	    for(int i=0;i<n;i++){
	        
	        if((fabs(A[i].marks-chromosome[0])<=fabs(A[i].marks-chromosome[1]))&&(fabs(A[i].marks-chromosome[0])<=fabs(A[i].marks-chromosome[2]))){
	            sum1+=A[i].marks;
	            A[i].gp=1;
	            count1++;
	        }
	        else if((fabs(A[i].marks-chromosome[1])<=fabs(A[i].marks-chromosome[0]))&&(fabs(A[i].marks-chromosome[1])<=fabs(A[i].marks-chromosome[2]))){
	            sum2+=A[i].marks;
	            A[i].gp=2;
	            count2++;
	        }
	        else if((fabs(A[i].marks-chromosome[2])<=fabs(A[i].marks-chromosome[0]))&&(fabs(A[i].marks-chromosome[2])<=fabs(A[i].marks-chromosome[1]))){
	            sum3+=A[i].marks;
	            A[i].gp=3;
	            count3++;
	        }
	    }
	    cout<<"grp representative in generation "<<k+1<<" are "<<chromosome[0]<<"   "<<chromosome[1]<<"  "<<chromosome[2]<<"\t";	    
	    chromosome[0]=sum1/count1;
	    chromosome[1]=sum2/count2;
	    chromosome[2]=sum3/count3;

	    //cout<<sum1;
	    //cout<<"\n"<<count1;
	    for(int i=0;i<n;i++){
	        cout<<A[i].gp<<"  ";
	    }
	    cout<<"\n";
	    sum1=0;
	    sum2=0;
	    sum3=0;
	    count1=0;
	    count2=0;
	    count3=0;
	    
	}
	return 0;
}


