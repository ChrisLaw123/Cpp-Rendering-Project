#ifndef library_header_h
#define library_header_h

class library_header {
    
public:
    ~library_header() {
        print();
    }
    void print(); // Declaration only
private:
    int value = 10;
};

#endif