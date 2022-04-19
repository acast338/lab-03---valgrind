int main() {
    int *p = new int(10);

    delete p;   // there should only be one deallocation

    return 0;
}
