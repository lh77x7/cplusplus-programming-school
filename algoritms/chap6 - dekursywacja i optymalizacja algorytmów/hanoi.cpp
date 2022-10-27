void hanoi(int n, int a, int b)
{
    if(n == 1)
    cout << "Przesun dysk nr " << n << " z " << a << " na " << b << endl;
    else
    {
        hanoi(n - 1, a, 3 - a - b);
        cout << "Przesun dysk nr " << n << " z " << a << " na " << b << endl;
        hanoi(n - 1, 3 - a - b, b);
    } 
}
