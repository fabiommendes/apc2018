int read_int(char* msg) {
    int n = 0;
    printf(msg);
    scanf("%d", &n);
    return n;
}

double read_double(char* msg) {
    double n = 0.0;
    printf(msg);
    scanf("%lf", &n);
    return n;
}