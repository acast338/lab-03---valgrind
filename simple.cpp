int main() {
    int *p = new int[10];
    p[9] = 1; //fixed size

    delete[] p; //Deallocate memory (incorrectly)

    return 0;
}
