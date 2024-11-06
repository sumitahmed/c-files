nt main() {
   struct employee
   {
    char name [25];
    int age;
    float bs;
   }
   struct employee e;
   e.name = "hacker";
   e.age= 25;
   printf("%s %d",e.name,e.age);
   return 0;
}