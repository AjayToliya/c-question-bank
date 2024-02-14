#include <iostream>
#include <string>

class Hotel {
private:
    std::string hotel_name;
    std::string hotel_type;
    int hotel_staff_size;
    int hotel_room_size;
    int hotel_establish_year;
    std::string hotel_country;
    std::string hotel_rating_type;
    std::string hotel_website;

public:
    // Getter methods
    std::string getHotelName() const {
        return hotel_name;
    }

    std::string getHotelType() const {
        return hotel_type;
    }

    int getHotelStaffSize() const {
        return hotel_staff_size;
    }

    int getHotelRoomSize() const {
        return hotel_room_size;
    }

    int getHotelEstablishYear() const {
        return hotel_establish_year;
    }

    std::string getHotelCountry() const {
        return hotel_country;
    }

    std::string getHotelRatingType() const {
        return hotel_rating_type;
    }

    std::string getHotelWebsite() const {
        return hotel_website;
    }

    // Setter methods
    void setHotelName(const std::string& name) {
        hotel_name = name;
    }

    void setHotelType(const std::string& type) {
        hotel_type = type;
    }

    void setHotelStaffSize(int size) {
        hotel_staff_size = size;
    }

    void setHotelRoomSize(int size) {
        hotel_room_size = size;
    }

    void setHotelEstablishYear(int year) {
        hotel_establish_year = year;
    }

    void setHotelCountry(const std::string& country) {
        hotel_country = country;
    }

    void setHotelRatingType(const std::string& ratingType) {
        hotel_rating_type = ratingType;
    }

    void setHotelWebsite(const std::string& website) {
        hotel_website = website;
    }
};

int main() {
    Hotel myHotel;

    // Setting hotel information using setter methods
    myHotel.setHotelName("Grand Hotel");
    myHotel.setHotelType("Luxury");
    myHotel.setHotelStaffSize(100);
    myHotel.setHotelRoomSize(200);
    myHotel.setHotelEstablishYear(1990);
    myHotel.setHotelCountry("United States");
    myHotel.setHotelRatingType("5 stars");
    myHotel.setHotelWebsite("http://www.grandhotel.com");

    // Displaying hotel information using getter methods
    std::cout << "Hotel Name: " << myHotel.getHotelName() << std::endl;
    std::cout << "Hotel Type: " << myHotel.getHotelType() << std::endl;
    std::cout << "Hotel Staff Size: " << myHotel.getHotelStaffSize() << std::endl;
    std::cout << "Hotel Room Size: " << myHotel.getHotelRoomSize() << std::endl;
    std::cout << "Hotel Establish Year: " << myHotel.getHotelEstablishYear() << std::endl;
    std::cout << "Hotel Country: " << myHotel.getHotelCountry() << std::endl;
    std::cout << "Hotel Rating Type: " << myHotel.getHotelRatingType() << std::endl;
    std::cout << "Hotel Website: " << myHotel.getHotelWebsite() << std::endl;

    return 0;
}

