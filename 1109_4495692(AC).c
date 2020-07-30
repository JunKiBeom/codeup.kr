//
//  main.c
//  C Project
//
//  Created by 전기범 on 2018. 2. 15..
//  Copyright © 2018년 전기범. All rights reserved.
//

#include <stdio.h>

int main()
{
    char name[20];
    int age;
    int part;
    float key;
    
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&part);
    scanf("%g",&key);
    
    printf("%s\n%d\n%c\n%g",name,age,part,key);
}

