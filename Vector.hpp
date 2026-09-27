class Vector{
    private:

        unsigned int Size;
        double* Vec;

    public:
        Vector();
        ~Vector();
        void AddData(double v);
        void AddVector(const double* v, unsigned int size);
        void ReplaceVector(const double*, unsigned int size);
        unsigned int GetSize() const;
        const double* GetVector() const;
};
