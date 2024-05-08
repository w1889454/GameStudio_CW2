// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class GAMESTUDIO_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
    virtual bool Initialize() override;

protected:
    UPROPERTY(meta = (BindWidget))
    UButton* PlayButton;

    UPROPERTY(meta = (BindWidget))
    UButton* ExitButton;

private:
    UFUNCTION()
    void OnPlayClicked();

    UFUNCTION()
    void OnExitClicked();
	
};
