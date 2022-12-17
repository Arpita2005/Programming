 //WAP to store your friend's name and phone number (at least 5) and display those.
 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 struct phone_no
 {
    char name[50];
    long long int call_number;
 };
 int main()
 {
    struct phone_no c1;
     struct phone_no c2;
      struct phone_no c3;
    strcpy( c1.name,"Arpita Maitra\n");
    c1.call_number, 9674363187;
    strcpy( c2.name,"Kareena Jaiswal\n");
    c2.call_number, 8777417805;
    strcpy( c3.name,"Koyel Sinha\n");
    c3.call_number, 889663888;

    printf("The student details:\n");
    printf("========================\n");
    printf("Name:%s\n",c1.name);
    printf("Your phone number is:%lld\n",c1.call_number);
    printf("========================\n");
    printf("Name:%s\n",c2.name);
    printf("Your phone number is:%lld\n",c2.call_number);
    printf("========================\n");
    printf("Name:%s\n",c3.name);
    printf("Your phone number is:%lld\n",c3.call_number);

    getch();
    return 0;
 }
 