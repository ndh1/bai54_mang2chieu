//
//  main.cpp
//  bai54_mang2chieu
//
//  Created by Nguyen Dinh Huong on 04/07/2021.
//

#include <iostream>

void nhap(int a[][100], int n,int m){
    do {
        if (n<0 || m<0){
            printf("Nhap lai n hoac m ");
        }
    } while (n<0 || m<0);
    
    for (int i=0; i<n;i++){
        for (int j=0;j<m;j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void xuat(int a[][100],int n, int m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n,m;
    int a[100][100];
    scanf("%d%d",&n,&m);
    nhap(a, n, m);
    xuat(a, n, m);
}
