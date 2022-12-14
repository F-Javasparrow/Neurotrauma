
class RscText;
class RscButton;
class RscPicture;
class RscListBox;
class RscToolbox;
class RscProgress;
class RscActivePicture;
class RscButtonMenu;
class RscControlsGroupNoScrollbars;

class Neuro_Medical_Menu {
    idd = IDD_MEDICAL_MENU;
    movingEnable = 1;
    enableSimulation = 1;
    onLoad = "_this call neuro_medical_gui_fnc_onMenuOpen;";
    onUnload = "_this call neuro_medical_gui_fnc_onMenuClose;";

    // 窗体背景
    class ControlsBackground {
        class MenuBackground: RscText {
            idc = -1;
            colorBackground[] = {0.2,0.2,0.2,0.3};
            x = 3 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 1 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 46.5 * GUI_GRID_W;
            h = 20 * GUI_GRID_H;
        };
        class TitleBackground: RscText {
            idc = -1;
            colorBackground[] = {0,0,0,1};
            x = -10.5 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 0 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 60 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };
        class BodySelectMenuBackground: RscText {
            idc = -1;
            colorBackground[] = {0.2,0.2,0.2,0.7};
            x = -10.5 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 1 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 13.5 * GUI_GRID_W;
            h = 20 * GUI_GRID_H;
        };
        class ActionBackground: RscText
        {
            idc = -1;
            colorBackground[] = {1,1,1,0.6};
            x = 22.5 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 3.5 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 26.5 * GUI_GRID_W;
            h = 17 * GUI_GRID_H;
        };
        class InfoBackground: RscText
        {
            idc = -1;
            colorBackground[] = {1,1,1,0.6};
            x = 3.5 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 6 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 18.5 * GUI_GRID_W;
            h = 14.5 * GUI_GRID_H;
        };
        class MonitorBackground: RscText
        {
            idc = -1;
            colorBackground[] = {0,0,0,1};
            x = 3.5 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 1.5 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 18.5 * GUI_GRID_W;
            h = 4 * GUI_GRID_H;
        };

        class TitleText: RscText {
            idc = -1;
            style = ST_TITLE
            text = "医疗菜单";
            x = -10.5 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 0 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 60 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };
    };

    class Controls {
        // 部位选择
        class HeadSelect: RscButton {
            idc = IDC_BODY_HEAD;
            onButtonClick = QUOTE(GVAR(selectedMainPart_Index) = 0);
            tooltip = "Head"; //--- ToDo: Localize;
            x = -5 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 2.25 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 2.5 * GUI_GRID_W;
            h = 2.5 * GUI_GRID_H;
        };
        class TorsoSelect: RscButton {
            idc = IDC_BODY_TORSO;
            onButtonClick = QUOTE(GVAR(selectedMainPart_Index) = 1);
            tooltip = "Torso"; //--- ToDo: Localize;
            x = -6 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 5 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 4.5 * GUI_GRID_W;
            h = 4.5 * GUI_GRID_H;
        };
        class VantralSelect: RscButton {
            idc = IDC_BODY_VENTRAL;
            onButtonClick = QUOTE(GVAR(selectedMainPart_Index) = 2);
            tooltip = "Vantral"; //--- ToDo: Localize;
            x = -5.5 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 9.75 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 3.5 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
        };
        class LeftArmSelect: RscButton {
            idc = IDC_BODY_ARMLEFT;
            onButtonClick = QUOTE(GVAR(selectedMainPart_Index) = 3);
            tooltip = "LeftArm"; //--- ToDo: Localize;
            x = -1.25 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 5.5 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 1.25 * GUI_GRID_W;
            h = 5.5 * GUI_GRID_H;
        };
        class RightArmSelect: RscButton {
            idc = IDC_BODY_ARMRIGHT;
            onButtonClick = QUOTE(GVAR(selectedMainPart_Index) = 4);
            tooltip = "RightArm"; //--- ToDo: Localize;
            x = -7.5 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 5.5 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 1.25 * GUI_GRID_W;
            h = 5.5 * GUI_GRID_H;
        };
        class LeftLegSelect: RscButton {
            idc = IDC_BODY_LEGLEFT;
            onButtonClick = QUOTE(GVAR(selectedMainPart_Index) = 5);
            tooltip = "LeftLeg"; //--- ToDo: Localize;
            x = -3.25 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 12 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 1.5 * GUI_GRID_W;
            h = 5 * GUI_GRID_H;
        };
        class RightLegSelect: RscButton {
            idc = IDC_BODY_LEGRIGHT;
            onButtonClick = QUOTE(GVAR(selectedMainPart_Index) = 6);
            tooltip = "RightLeg"; //--- ToDo: Localize;
            x = -5.75 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 12 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 1.5 * GUI_GRID_W;
            h = 5 * GUI_GRID_H;
        };
        
        // 类选择
        class CategorySelect: RscToolbox {
            idc = IDC_Category;
            type = CT_TOOLBOX;
            style = ST_CENTER;
            colorText[] = {0.95,0.95,0.95,1};
            color[] = {0.95,0.95,0.95,1};
            colorTextSelect[] = {0.95,0.95,0.95,1};
            colorSelect[] = {0.95,0.95,0.95,1};
            colorTextDisable[] = {0.4,0.4,0.4,1};
            colorDisable[] = {0.4,0.4,0.4,1};
            colorSelectedBg[] = {0.13, 0.54, 0.21, 0.5};
            strings[] = {"Checks","Wounds","Circulation","Pharma","Surgery","Other"};
            values[]  = {0,1,2,3,4,5};
            x = 22.5 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 1.5 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 26.5 * GUI_GRID_W;
            h = 1.5 * GUI_GRID_H;
            rows = 1;
	        columns = 6;
            type = CT_TOOLBOX;
        };

        // 子按钮
        class Action1: RscButtonMenu {
            idc = IDC_ACTION_1;
            style = ST_LEFT;
            x = 23 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 4.25 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 12.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            class Attributes {
                align = "center";
                color = "#E5E5E5";
                font = "RobotoCondensed";
                shadow = "false";
            };
        };
        class Action2: Action1 {
            idc = IDC_ACTION_2;
            y = 5.5 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action3: Action1 {
            idc = IDC_ACTION_3;
            y = 6.75 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action4: Action1 {
            idc = IDC_ACTION_4;
            y = 8 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action5: Action1 {
            idc = IDC_ACTION_5;
            y = 9.25 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action6: Action1 {
            idc = IDC_ACTION_6;
            y = 10.5 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action7: Action1 {
            idc = IDC_ACTION_7;
            y = 11.75 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action8: Action1 {
            idc = IDC_ACTION_8;
            y = 13 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action9: Action1 {
            idc = IDC_ACTION_9;
            y = 14.25 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action10: Action1 {
            idc = IDC_ACTION_10;
            y = 15.5 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action11: Action1 {
            idc = IDC_ACTION_11;
            y = 16.75 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action12: Action1 {
            idc = IDC_ACTION_12;
            y = 18 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action13: Action1 {
            idc = IDC_ACTION_13;
            y = 19.25 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action14: Action1 {
            idc = IDC_ACTION_14;
            y = 20.5 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action15: Action1 {
            idc = IDC_ACTION_15;
            y = 21.75 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };
        class Action16: Action1 {
            idc = IDC_ACTION_16;
            y = 23 * GUI_GRID_H + GUI_GRID_CENTER_Y;
        };

        // 数据输出
        class TreatmentLog: RscText {
            idc = -1;
            style = ST_CENTER;
            text = "test";
            x = 36 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 4 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 12.5 * GUI_GRID_W;
            h = 16 * GUI_GRID_H;
            colorText[] = {1, 1, 1, 0.9};
        };

        class Symptoms: RscListBox {
            idc = IDC_SYPTOMS;
            x = 4 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 6 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 13.5 * GUI_GRID_W;
            h = 14.5 * GUI_GRID_H;
            colorSelect[] = {1, 1, 1, 1};
            colorSelect2[] = {1, 1, 1, 1};
            colorBackground[] = {0, 0, 0, 0.2};
            colorSelectBackground[] = {0, 0, 0, 0};
            colorSelectBackground2[] = {0, 0, 0, 0};
            colorScrollbar[] = {0.9, 0.9, 0.9, 1};
        };
        class SyptomSeverity: Symptoms {
            idc = IDC_SEVERITY;
            x = 17.5 * GUI_GRID_W + GUI_GRID_CENTER_X;
            w = 4 * GUI_GRID_W;
        };
        
        // 监视仪
        class MonitorHR: RscText {
            idc = IDC_MONITOR_HR;
            style = ST_CENTER;
            text = "--";
            x = 6 * GUI_GRID_W + GUI_GRID_CENTER_X;
            y = 1.5 * GUI_GRID_H + GUI_GRID_CENTER_Y;
            w = 4 * GUI_GRID_W;
            h = 1.25 * GUI_GRID_H;
            colorText[] = {1, 1, 1, 0.9};
            font = "PuristaSemibold";
            sizeEx = 1.15 * GUI_GRID_H;
        };
        class MonitorRR: MonitorHR {
            idc = IDC_MONITOR_RR;
            text = "--/--";
            x = 10 * GUI_GRID_W + GUI_GRID_CENTER_X;
            sizeEx = 1 * GUI_GRID_H;
        };
        class MonitorSpO2: MonitorHR {
            idc = IDC_MONITOR_SPO2;
            text = "--%";
            x = 14 * GUI_GRID_W + GUI_GRID_CENTER_X;
            w = 5 * GUI_GRID_W;
            sizeEx = 1 * GUI_GRID_H;
        };
    };
};
