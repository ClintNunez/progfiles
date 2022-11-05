#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
    class space_age {
        private:
            double age_in_seconds;
        public:
            space_age(double _age_in_seconds) {
                age_in_seconds = _age_in_seconds; 
            }
           
            double seconds() const {
                return age_in_seconds;
            }

            double on_mercury() const {
                return age_in_seconds / 7600543.81992;
            }

            double on_venus() const {
                return age_in_seconds / 19414149.052176;
            }

            double on_earth() const {
                return age_in_seconds / 31557600;    
            }

            double on_mars() const {
                return age_in_seconds / 59356108.549008;
            }

            double on_jupiter() const {
                return age_in_seconds / 374355659.124;
            }

            double on_saturn() const {
                return age_in_seconds / 929292362.8848;
            }

            double on_uranus() const {
                return age_in_seconds / 2651370019.3296;
            }

            double on_neptune() const {
                return age_in_seconds / 5200418560.032;
            }
    };
}

#endif
