#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
    class age {
        private:
            double age_in_seconds;
        public:
            age(double _age_in_seconds) {
                age_in_seconds = _age_in_seconds; 
            }
           
            double on_mercury() {
                return age_in_seconds / 7600543.81992;
            }

            double on_venus() {
                return age_in_seconds / 19414149.052176;
            }

            double on_earth() {
                return age_in_seconds / 31557600;    
            }

            double on_mars() {
                return age_in_seconds / 59356108.549008;
            }

            double on_jupiter() {
                return age_in_seconds / 374355659.124;
            }

            double on_saturn() {
                return age_in_seconds / 929292362.8848;
            }

            double on_uranus() {
                return age_in_seconds / 2651370019.3296;
            }

            double on_neptune() {
                return age_in_seconds / 5200418560.032;
            }
    };
}

#endif
