#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//int main(){
//int i,a,b,c=0,d=10,n=0;
//
//
//scanf("%d",&a);
//if(a<=1)
//c=1;
//else {for(i=2;i<=sqrt(a);i++){
//
//         if(a%i==0)
//		 {
//		 
//         c=1;
//         break;
//}
//}
//}
//if(c==1){
//
//printf("%d�������� ",a);
//
//}
//else{
//printf("%d������ ",a); 
//}
//
//}
//��ѡ����˲�ѭ��ʱ һ��Ҫȷ�������ÿ��ѭ����ʼʱ������ 
//int main(){
//int i,j,a,b=0,c;
//for(i=1;i<=10;i++){
//     scanf("%d",&a);
//     c=0;
//     if(a<=1){c=1;
//	 }else{for(j=2;j<=sqrt(a);j++){//������j<=a-1���ж� �ֻ���  ������������   
//	 if(a%j==0){c=1;
//	 break;
//	 }
//	 }
//	 }
//     ++b;
////     if(c==1){
////	 printf("%d�������� ",a);}//���滻 
////	 else{printf("%d������ ",a);
////	 }
//     c? printf("%d�������� ",a):printf("%d������ ",a);
//	 if(b%5==0){printf("\n");
//	 }
//}
//return 0;
//}
//�������� 
//int main(){
//int i=0,a,c;
//scanf("%d",&a);
//int b[a];
//for(i=0;i<a;i++){
//	scanf("%d",&b[i]);
//}
//for(i=0;i<a;i++){
//	printf("%d ",b[i]);
//}
//printf("\n");
//for(i=0;i<a/2;i++){//ע��ÿ��ѭ��ʱ��ʼ��i ��i=0Ҫ���¸�ֵ  ����i=a-1 �������ϸ����õĽ�� 
//	
//	c=b[i];
//	b[i]=b[a-1-i];
//	b[a-1-i]=c;
//}
//for(i=0;i<a;i++){
//	printf("%d ",b[i]);
//}
//return 0;
//} 
//ѡ������
//int main(){
//int a,b,c,i,e;
//scanf("%d",&a);
//int d[a];
//for(i=0;i<a;i++){
//	scanf("%d",&d[i]);
//}
//for(i=0;i<a-1;i++)//�ǳ��״�  a[10]  ����a<10���ɱ�ʾ���е����� 
//    for(b=i+1;b<a;b++){//�������ﲻΪb<a+1 
//    if(d[i]>d[b]){
//    e=d[i];
//    d[i]=d[b];
//    d[b]=e;
//	}
//	}
//for(i=0;i<a;i++){
//	printf("%3d",d[i]);
//}
//return 0;
//}  
//ֱ���������� 
//int main(){
//int a,b,c,i,e;
//int d[10];
//for(i=0;i<10;i++){
//    scanf("%d",&d[i]);
//}
//for(i=0;i<9;i++){
//	c=i;
//	for(b=i+1;b<10;b++){
//		if(d[c]>d[b]){
//			c=b;
//		}
//	
//	}
//	
//	if(i!=c){
//		e=d[i];
//		d[i]=d[c];
//		d[c]=e;
//
//		
//	}
//} 
//for(i=0;i<10;i++){
//	printf("%d",d[i]);
//}

//��ӡ������ 
//int main(){
//    int i, j;
//    
//    for(i = 1; i <= 5; i++) {
//        for(j = 1; j <= 5 - i; j++) {
//            printf(" ");
//        }
//        for(j = 1; j <= 2 * i - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    
//    return 0;
//}
//��ӡ������ 
//int main(){
//    int i, j;
//    
//    for(i = 5; i >=1; i--) {
//        for(j =1;j<=5-i;j++) {
//            printf(" ");
//        }
//        for(j = 1; j <= 2 * i - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    
//    return 0;
//}
//��ӡ���� 
//int main (){
//int a,i,j;
//do{
//	scanf("%d",&a);
//}while(a%2==0);
//int b=(a+1)/2;
//for(i=1;i<=b;i++){
//	for(j=1;j<=b-i;j++){//��һ�ε�b-i����ʵ�������еĴ��� 
//		printf(" ");
//	}
//	for(j=1;j<=2*i-1;j++){
//		printf("*");
//	}
//	printf("\n");}
//for(i=b;i>=1;i--){
//	for(j=1;j<=b-i;j++){
//		printf(" ");
//	}
//	for(j=1;j<=2*i-1;j++){
//		printf("*");
//	}
//	printf("\n");
//
//}
//
//	
//	
//	
//	
//	
//	
//return 0;
//} 
//����˷��ھ��� 
//int main(){
//int a=9,i=1,j;
//for (i=1;i<=9;i++){
//	for(j=1;j<=i;j++){
//		printf("%d*%d=%d ",j,i,i*j);
//	}
//	printf("\n");
//}
//return 0;
//} 
//int main(){
//int a=9,i=1,j;
//for (i=1;i<=9;i++){
//	for(j=i;j<=9;j++){
//		printf("%d*%d=%d ",j,i,i*j);
//	}
//	printf("\n");
//}
//return  0;
//}
//�������Ķ����� 

//int a,b=0;
//scanf("%d",&a);
//while(1){
//	b=b*10+a%2;
//	a/=2;
//	if(a<2){
//		b=b*10+a;
//		break; 
//		
//	}
//}	
//printf("%d",b);	
//return 0;
//} 

//������ת�� 
//int main(){

//int a, b = 0, c = 1;
//scanf("%d", &a);
//    
//while(a > 0) {
//        b = b + a % 2 * c;
//        a /= 2;
//        c = c * 10;
//    }
//printf("%d", b);


//}
//��ӡ���� 
//int main(){
//int a,b,i;
//for(i=1;i<=5;i++){
//	for(b=1;b<=5-i;b++){
//		printf(" ");
//	}
//	for(b=1;b<=2*i-1;b++){
//		printf("*");
//	}
//	printf("\n");
//}	
//for(i=4;i>=1;i--){
//	for(b=1;b<=5-i;b++){
//		printf(" ");
//	}
//	for(b=1;b<=2*i-1;b++){
//		printf("*");
//	}
//	printf("\n");
//}	
//	
//	
//	
//return 0;
//} 
//������ת��
//int main(){
//int a=13,b=0,c=1;
//while(a>0){
//	b=b+a%2*c;
//	a/=2;
//	c*=10;
//}
//printf("%d",b);	
//	
//	
//	
//return 0;
//} 
//���������жϼ�ת��
//int main(){
//int a,c;
//scanf("%d",&a);
//c=a; //ɨ���Ժ��ٽ�ס 
// //��a����ѭ����  a��ֵ�ͱ��ı��� ��ȥ��b�ȽϾʹ��� 
//int b=0;
//while(a>0)	{
//	b=b*10+a%10;
//	a/=10;
//	
//}
// 
//if(b==c){
//	printf("�ǻ�����"); 
//}
//else{
//	printf("���ǻ�����");
//}
//
//
//
//return 0;
//} 
//ð�������С���� 
//int main() {
//int i,b,c;
//int a[5];
//for(i=0;i<=4;i++){
//	scanf("%d",&a[i]);
//}
//for(i=0;i<4;i++){
//	for(b=0;b<4-i;b++){
//		if(a[b]>a[b+1]){
//		c=a[b];
//		a[b]=a[b+1];
//		a[b+1]=c;
//		}
//		
//	}
//}
//for(i=0;i<=4;i++){
//	printf("%3d",a[i]);
//}
//
//
//
//
//return 0;
//}
//ð�ݺ����Ӵ�С 
//int main(){
//int i,b,c;
//int a[5];
//for(i=0;i<=4;i++){
//	scanf("%d",&a[i]);
//}
//for(i=3;i>=0;i--){
//	for(b=4;b>=4-i;b--){
//		if(a[b]>a[b-1]){
//		c=a[b];
//		a[b]=a[b-1];
//		a[b-1]=c;
//		}
//		
//	}
//}
//for(i=0;i<=4;i++){
//	printf("%3d",a[i]);
//}	
//return 0;
//} 
//������� 
//int main(){
//int a[6]={1,2,4,6,9};
//int b;
//int i; 
//scanf("%d",&b);
//for(i=4;i>=0;i--){
//	if(a[i]<b){
//		a[i+1]=b;
//		break;
//	}
//	else {
//		a[i+1]=a[i];
//	}
//}
//if (i<0){
//	a[0]=b;
//}	
//for(i=0;i<=5;i++){
//printf("%3d",a[i]);	}
//	
//
//	
//	
//	
//return 0;
//}
//˳����� 
//int main(){
//int a[5]={1,2,4,6,9};
//int b;
//int i; 
//scanf("%d",&b);
//for(i=0;i<=4;i++){
//	if(a[i]==b){
//		printf("�ҵ����ǵ�%d����",i+1);
//		break;}
//	
//	}
//if(i>4){
//	printf("δ�ҵ�");
//} 
//�۰����� 
//int main(){
//int d[5]={1,2,4,6,9};
//int a=0;
//int b=4;
//int c,mid;
//scanf("%d",&c);
//do{
//	 mid=(a+b)/2;
//	if(c==d[mid]){
//		printf("%d��λ����a[%d]",c,mid);
//		break;
//		
//	}
//	else if(c<d[mid])
//	     b=mid-1;
//    else 
//         a=mid+1;
//} while(a<=b);
//if(c!=d[mid])
//
//	printf("û�ҵ�"); 
//
//	
//return 0;
//} 
//
//int main(){
//int i,j;
//int a[2][3];
//for(i=0;i<=1;i++)
//     for(j=0;j<=2;j++){
//     	scanf("%d",&a[i][j]);
//	 }
//for(i=0;i<=1;i++){
//	printf("%4d%4d%4d\n",a[i][0],a[i][1],a[i][2]);
//}
//
//
//return 0;
//
//}
// ����Խ����ϵĺ�  
//
//int main(){
//int i,j,c=0.;
//int a[3][3];
//for(i=0;i<=2;i++)
//     for(j=0;j<=2;j++){
//     	scanf("%d",&a[i][j]);
//	 }
//for(i=0;i<=2;i++){
//
//     for(j=0;j<=2;j++){
//     	printf("%d",a[i][j]);
//     	}
//     printf("\n");
//}
//
//	
//c=0;
//for(i=0;i<=2;i++)
//     for(j=0;j<=2;j++){
//     	if(i+j==2||i==j){
//     		c=c+a[i][j];
//		 }
//	 }
//printf("%d",c);
//
//
//
//
//
//
//return 0;
//}
//����������
//#define N 11
//int main(){
//int i,j,y[N][N];
// ��ʼ������Ϊ0
//for (i = 0; i < N; i++) {
//        for (j = 0; j < N; j++) {
//            y[i][j] = 0;
//        }
//    }
//for (i=1;i<N;i++){
//	y[i][i]=1;
//	y[i][1]=1; 
//	for(j=2;j<=i-1;j++){
//		y[i][j]=y[i-1][j]+y[i-1][j-1];
//	}
//}
//for (i=1;i<N;i++){
//	for(j=1;j<=i;j++){
//	
//	printf("%4d",y[i][j]);}
//    printf("\n");    	
//
//	
//}
//	
//return 0;
//}  
//쳲��������� 
//int main(){
//int a[20000];
//a[1]=1;
//a[2]=1;
//int i=1,b;
//for(i=3;i<20000;i++){
//	a[i]=a[i-1]+a[i-2];
//}
//scanf("%d",&b);
//printf("%d",a[b]);
// 
//
//
//
//
//
//return 0;
//}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
//�÷�
//int main() {
//int r,c,n,i,j,r1,c1;
//scanf("%d",&n);
//n=2*n-1;
//int a[n][n];
//for(i=0;i<=n-1;i++)
//    for(j=0;j<=n-1;j++){
//    	a[i][j]=0; 
//	}
//r=0;
//c=n/2;
//for(i=1;i<=n*n;i++){
//	a[r][c]=i;
//	r1=(r-1+n)%n;
//	c1=(c+1)%n;
//	if (a[r1][c1]==0){
//	r=r1;
//	c=c1;
//	}
//	else{
//	r=(r+1)%n;
//	}
//	
//}
//for(i=0;i<=n-1;i++){
//
//    for(j=0;j<=n-1;j++){
//    	printf("%4d",a[i][j]);
//	}
//	printf("\n");
//}
//return 0;
//}
	
	
	
	
	



	
	
	
	
	

 
