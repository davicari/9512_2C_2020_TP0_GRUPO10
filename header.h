#ifndef HEADER_H
#define HEADER_H


class header
{
    public:
        header();
        virtual ~header();

    protected:

    private:
        string prev_block_;
        string txns_hash_;
        unsigned char bits_;
        unsigned int nonce_;


};

#endif // HEADER_H
