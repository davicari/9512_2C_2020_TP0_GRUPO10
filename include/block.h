#ifndef BLOCK_H
#define BLOCK_H


class block
{
    public:
        block();
        virtual ~block();

    protected:

    private:
        header header_;
        body body_;
};

#endif // BLOCK_H
