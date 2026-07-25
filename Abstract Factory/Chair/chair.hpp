#ifndef CHAIR_HPP
#define CHAIR_HPP

#include <iostream>

class Chair
{

public:
    virtual void chairType() = 0;
    virtual ~Chair() = default;
};

class ArtChair : public Chair
{

public:
    void chairType() override;
    ~ArtChair();
};

class ClassicChair : public Chair
{

public:
    void chairType() override;
    ~ClassicChair();
};

#endif