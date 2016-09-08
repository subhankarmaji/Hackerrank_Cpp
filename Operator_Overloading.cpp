class Matrix{
    public:
        vector<vector<int>> a;
        Matrix operator+ (Matrix & M){
            for(int i = 0; i < this->a.size();++i){
                for(int j = 0; j < this->a[i].size(); ++j){
                    this->a[i][j] += M.a[i][j];
                }
            }
            return *this;
        }
};
