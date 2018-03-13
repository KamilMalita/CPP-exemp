#include "Kierownik.h"



Kierownik::Kierownik()
{
	m_NazwaDzialu = "";
	m_nLiczbaPracownikow = 0;
}

Kierownik::Kierownik(const Kierownik& wzor)
{
	m_NazwaDzialu = wzor.m_NazwaDzialu;
	m_nLiczbaPracownikow = wzor.m_nLiczbaPracownikow;
}

Kierownik::~Kierownik()
{
}

Kierownik& Kierownik:: operator=(const Kierownik& wzor)
{
	if (this == &wzor)
	{
		return *this;
	}
	m_NazwaDzialu = wzor.m_NazwaDzialu;
	m_nLiczbaPracownikow = wzor.m_nLiczbaPracownikow;
	return *this;
}

bool Kierownik:: operator==(const Kierownik& wzor)const
{
	if (this == &wzor)
	{
		return true;
	}
	if (Porownaj(wzor) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

ostream &operator<<(ostream& wy, const Kierownik &wzor)
{
	wy << wzor.m_NazwaDzialu << endl << wzor.m_nLiczbaPracownikow;
	return wy;
}

istream &operator >> (istream& we, Kierownik &wzor)
{
	we >> wzor.m_NazwaDzialu >> wzor.m_nLiczbaPracownikow;
	return we;
}

void Kierownik::WypiszDane()
{
	cout << *this;
}

Pracownik* Kierownik::KopiaObiektu()
{
	Kierownik *nowy = new Kierownik(*this);
	return nowy;
}