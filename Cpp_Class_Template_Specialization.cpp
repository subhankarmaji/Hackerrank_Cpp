template <typename T> struct Traits
{
    static string name(int index) { return "unknown"; }
};

template<> struct Traits<Fruit>
{
    static std::string name(int index)
    {
        switch((Fruit)index) {
        case Fruit::apple:      return "apple";
        case Fruit::orange:     return "orange";
        case Fruit::pear:       return "pear";
        default:                return "unknown";
        }
    }
};

template<> struct Traits<Color>
{
    static std::string name(int index)
    {
        switch((Color)index) {
        case Color::red:        return "red";
        case Color::green:      return "green";
        case Color::orange:     return "orange";
        default:                return "unknown";
        }
    }
};
