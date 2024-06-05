#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

class person
{
private:
    char name[20];
    int id;
public:
    void setDetails(const char* name, int id);
    void getDetails() const;
};

#endif // BIBLIOTECA_H
