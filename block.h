#ifndef BLOCK_H
#define BLOCK_H

class header;
class body;


class block
{
    public:
        block();
        virtual ~block();


    private:
        header header_;
        body body_;
};

#endif // BLOCK_H
