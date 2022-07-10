#include "Site.h"

USite::USite()
{
	
}

USite::USite(int IDIn, FString UrlIn, FString DisplayIn, FString NameIn,
	FString SlugIn, float LatitudeIn, float LongitudeIn) {
	ID = IDIn;
	Url = UrlIn;
	Display = DisplayIn;
	Name = NameIn;
	Slug = SlugIn;

	Latitude = LatitudeIn;
	Longitude = LongitudeIn;
}

USite::~USite()
{
	
}
