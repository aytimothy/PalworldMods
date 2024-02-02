#include "PalSkyLightVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkyLightComponent -FallbackName=SkyLightComponent
#include "Net/UnrealNetwork.h"

APalSkyLightVolume::APalSkyLightVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent0"));
    this->Component = (USkyLightComponent*)RootComponent;
    this->bEnabled = false;
    this->bDisableEnabledFlag = false;
}

void APalSkyLightVolume::OnRep_bEnabled() {
}

void APalSkyLightVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalSkyLightVolume, bEnabled);
}


