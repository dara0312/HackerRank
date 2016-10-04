#include <iostream>
#include <vector>
using namespace std;

class Spell {
private:
	string scrollName;
public:
	Spell() : scrollName("") { }
	Spell(string name) : scrollName(name) { }
	virtual ~Spell() { }
	string revealScrollName() {
		return scrollName;
	}
};

class Fireball : public Spell {
private: int power;
public:
	Fireball(int power) : power(power) { }
	void revealFirepower() {
		cout << "Fireball: " << power << endl;
	}
};

class Frostbite : public Spell {
private: int power;
public:
	Frostbite(int power) : power(power) { }
	void revealFrostpower() {
		cout << "Frostbite: " << power << endl;
	}
};

class Thunderstorm : public Spell {
private: int power;
public:
	Thunderstorm(int power) : power(power) { }
	void revealThunderpower() {
		cout << "Thunderstorm: " << power << endl;
	}
};

class Waterbolt : public Spell {
private: int power;
public:
	Waterbolt(int power) : power(power) { }
	void revealWaterpower() {
		cout << "Waterbolt: " << power << endl;
	}
};

class SpellJournal {
public:
	static string journal;
	static string read() {
		return journal;
	}
};
string SpellJournal::journal = "";

#include <cstring>
void counterspell(Spell *spell) {
	if (Fireball *f = dynamic_cast<Fireball*>(spell))
		f->revealFirepower();
	else if (Frostbite *f = dynamic_cast<Frostbite*>(spell))
		f->revealFrostpower();
	else if (Thunderstorm *t = dynamic_cast<Thunderstorm*>(spell))
		t->revealThunderpower();
	else if (Waterbolt *w = dynamic_cast<Waterbolt*>(spell))
		w->revealWaterpower();
	else {
		string journal = SpellJournal::journal, reveal = spell->revealScrollName();
		int t = 0; int n[2000][2000];
		for (int i = 0; i < journal.length(); i++) {
			for (int j = 0; j < reveal.length(); j++) {
				n[i][j] = 0;
			}
		}
		for (int i = 1; i <= journal.length(); i++) {
			for (int j = 1; j <= reveal.length(); j++) {
				n[i][j] = max(journal[i - 1] == reveal[j - 1] ? n[i - 1][j - 1] + 1 : 0, max<int>(n[i - 1][j], n[i][j - 1]));
				if (t<n[i][j]) t = n[i][j];
			}
		}
		cout << t << endl;
	}
}

class Wizard {
public:
	Spell *cast() {
		Spell *spell;
		string s; cin >> s;
		int power; cin >> power;
		if (s == "fire") {
			spell = new Fireball(power);
		}
		else if (s == "frost") {
			spell = new Frostbite(power);
		}
		else if (s == "water") {
			spell = new Waterbolt(power);
		}
		else if (s == "thunder") {
			spell = new Thunderstorm(power);
		}
		else {
			spell = new Spell(s);
			cin >> SpellJournal::journal;
		}
		return spell;
	}
};

int main() {
	int T;
	cin >> T;
	Wizard Arawn;
	while (T--) {
		Spell *spell = Arawn.cast();
		counterspell(spell);
	}
	return 0;
}