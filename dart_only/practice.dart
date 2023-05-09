abstract class NunezCats {
    void meow() {
        print('meow');
    }    
    void checkIfChild({bool isChild = false}) {
        (isChild) ? print('yes') : print('no');
    }
    void checkIfHasChild({bool hasChild = false}) {
        (hasChild) ? print('yes') : print('no');
    }
}

class Miku extends NunezCats {
    final String name;

    Miku(this.name);

    factory Miku.instantiate() {
        return Miku('Miku');
    }
}
class Maru extends NunezCats {
    final String name;
    final bool hasChild = true;

    Maru(this.name);

    factory Maru.instantiate() {
        return Maru('Maru');
    }
}
class Louie extends NunezCats {
    final String name;
    final bool hasChild = true;

    Louie(this.name);

    factory Louie.instantiate() {
        return Louie('Louie');
    }
}
class Lily extends NunezCats {
    final String name;
    final bool hasChild = true;

    Lily(this.name);

    factory Lily.instantiate() {
        return Lily('Lily');
    }
}
void main() {
    final miku = Miku.instantiate();
    final maru = Maru.instantiate();
    final louie = Louie.instantiate();
    final lily = Lily.instantiate();

    miku.meow();
    miku.checkIfChild();
    miku.checkIfHasChild();

    maru.meow();
    maru.checkIfChild();
    maru.checkIfHasChild(hasChild: maru.hasChild);

    louie.meow();
    louie.checkIfChild();
    louie.checkIfHasChild();

    lily.meow();
    lily.checkIfChild();
    lily.checkIfHasChild();
}
