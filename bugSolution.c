int main() { 
    int x = 10; 
    int *ptr = &x; 
    *ptr = 20; 
    printf("%d\n", x); 
    //The free function is removed as it was causing undefined behavior 
    return 0; 
}