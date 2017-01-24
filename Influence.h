#include <string>

class Influence {
    public:
        Influence();
        
        void SetInfluenceName(std::string Name);
        std::string GetInfluenceName() const;
        
    private:
        std::string InfluenceName;
};