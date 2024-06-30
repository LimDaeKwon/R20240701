// Fill out your copyright notice in the Description page of Project Settings.


#include "RGameModeBase.h"
#include "RPawn.h"
#include "RPlayerController.h"

ARGameModeBase::ARGameModeBase()
{
	//Deafault Pawn , PlayerControllerClass Setting
	DefaultPawnClass = ARPawn::StaticClass();
	PlayerControllerClass = ARPlayerController::StaticClass();
}
