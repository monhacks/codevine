EventScript_UseSurf::
	checkitem ITEM_SURFBOARD, 1
	goto_if_eq VAR_RESULT, 0, EventScript_BlueWater
	lockall
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end

EventScript_BlueWater::
	lockall
	msgbox gText_WaterDeepBlue, MSGBOX_DEFAULT
	closemessage
	releaseall
	end
