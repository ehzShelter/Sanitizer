int arr[2];
void shift() { arr[1] = arr[0]; }
void push(int* p)
{
    shift();
    arr[0] = *p;
}
int pop()
{
    int x = arr[1];
    shift();
    return x;
}
void func1()
{
    int localvar;
    push(&localvar);
}
int main()
{
    func1();
    shift();
    return pop();
}
