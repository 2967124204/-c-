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
int main(){
    int i, j;
    
    for(i = 5; i >=1; i--) {
        for(j = 5; j <= 5 - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

			
	
	
	
	
	
	
	

 
