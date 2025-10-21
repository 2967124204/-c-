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
//printf("%d不是素数 ",a);
//
//}
//else{
//printf("%d是素数 ",a); 
//}
//
//}
//当选择旗杆并循环时 一定要确保旗杆在每次循环开始时被重置 
//int main(){
//int i,j,a,b=0,c;
//for(i=1;i<=10;i++){
//     scanf("%d",&a);
//     c=0;
//     if(a<=1){c=1;
//	 }else{for(j=2;j<=sqrt(a);j++){//或者用j<=a-1来判断 又或者  利用两个出口   
//	 if(a%j==0){c=1;
//	 break;
//	 }
//	 }
//	 }
//     ++b;
////     if(c==1){
////	 printf("%d不是素数 ",a);}//可替换 
////	 else{printf("%d是素数 ",a);
////	 }
//     c? printf("%d不是素数 ",a):printf("%d是素数 ",a);
//	 if(b%5==0){printf("\n");
//	 }
//}
//return 0;
//}
//倒序排列 
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
//for(i=0;i<a/2;i++){//注意每次循环时初始化i 即i=0要重新赋值  否则i=a-1 保留了上个玄幻的结果 
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
//选择排序
//int main(){
//int a,b,c,i,e;
//scanf("%d",&a);
//int d[a];
//for(i=0;i<a;i++){
//	scanf("%d",&d[i]);
//}
//for(i=0;i<a-1;i++)//非常易错  a[10]  但是a<10即可表示所有的数列 
//    for(b=i+1;b<a;b++){//所以这里不为b<a+1 
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
//直接排序插旗竿 
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

//打印三角形 
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
//打印倒三角 
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

			
	
	
	
	
	
	
	

 
