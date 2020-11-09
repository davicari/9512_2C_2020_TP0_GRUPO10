#ifndef INPUT_H
#define INPUT_H


class input
{
    public:
        input();
        virtual ~input();

    protected:

    private:
        std::string addr_;
        outpoint outpoint_;
};

#endif // INPUT_H
