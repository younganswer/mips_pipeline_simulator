#include "../../incs/draw_contents.hpp"
#include "../../incs/shape.hpp"

bool	draw_instruction_fetch(const Info &info);
bool	draw_instruction_decode(const Info &info);
bool	draw_execute(const Info &info);
bool	draw_memory_access(const Info &info);
bool	draw_write_back(const Info &info);

bool	draw_instruction_fetch(const Info &info) {
	// draw instruction memory sector ---------------------------------------------------------------------------
		DrawRectangleLinesEx(Rectangle{ -3100, -100, 500, 1000 }, 5.0f, BLACK);
		// draw text --------------------------------------------------------------------------------------------------
			DrawTextEx(GetFontDefault(), "Address", Vector2{ -3050, 90 }, 70.0f, 1.0f, BLACK);
			DrawTextEx(GetFontDefault(), "Instruction", Vector2{ -3030, 340 }, 70.0f, 3.0f, BLACK);
			DrawTextEx(GetFontDefault(), "memory", Vector2{ -2970, 440 }, 70.0f, 3.0f, BLACK);
		// draw text --------------------------------------------------------------------------------------------------

		// draw lines -------------------------------------------------------------------------------------------------
			draw_right_arrow(-3400, 120, -3100, 120, BLACK);
			DrawCircle(-3250, 120, 10.0f, BLACK);
		// draw lines -------------------------------------------------------------------------------------------------
	// draw instruction memory sector ---------------------------------------------------------------------------

	// draw alu sector ---------------------------------------------------------------------------------------------
		draw_trapezoid(-2916, -450, 120);
		// draw text --------------------------------------------------------------------------------------------------
			DrawTextEx(GetFontDefault(), "+", Vector2{ -2822, -362 }, 70.0f, 3.0f, BLACK);
		// draw text --------------------------------------------------------------------------------------------------

		// draw lines -------------------------------------------------------------------------------------------------
			DrawLineEx(Vector2{ -3250, 120 }, Vector2{ -3250, -400 }, 5.0f, BLACK);
			draw_right_arrow(-3250, -400, -2916, -400, BLACK);
			draw_right_arrow(-3000, -260, -2916, -260, BLACK);
			// draw text --------------------------------------------------------------------------------------------------
				DrawTextEx(GetFontDefault(), "4", Vector2{ -3060, -288 }, 70.0f, 3.0f, BLACK);
			// draw text --------------------------------------------------------------------------------------------------
		// draw lines -------------------------------------------------------------------------------------------------
	// draw alu sector ---------------------------------------------------------------------------------------------

	// draw pc sector -----------------------------------------------------------------------------------------------
		DrawRectangleLinesEx(Rectangle{ -3580, -80, 180, 400 }, 5.0f, BLACK);
		// draw text --------------------------------------------------------------------------------------------------
			DrawTextEx(GetFontDefault(), "PC", Vector2{ -3532, 90 }, 70.0f, 3.0f, BLACK);
		// draw text --------------------------------------------------------------------------------------------------
		// draw lines -------------------------------------------------------------------------------------------------
			draw_right_arrow(-3750, 120, -3580, 120, BLACK);
			draw_down_arrow(-3490, -1600, -3490, -80, BLACK);
			DrawLineEx(Vector2{ -3490, -1600 }, Vector2{ -1600, -1600 }, 5.0f, BLACK);
		// draw lines -------------------------------------------------------------------------------------------------
	// draw pc sector -----------------------------------------------------------------------------------------------

	// draw mux sector ----------------------------------------------------------------------------------------------
		DrawRectangleRoundedLines(Rectangle{ -3850, -30, 100, 300 }, 0.5f, 0, 5.0f, BLACK);
		// draw text --------------------------------------------------------------------------------------------------
			DrawTextEx(GetFontDefault(), "M", Vector2{ -3825, 10 }, 70.0f, 3.0f, BLACK);
			DrawTextEx(GetFontDefault(), "U", Vector2{ -3822, 90 }, 70.0f, 3.0f, BLACK);
			DrawTextEx(GetFontDefault(), "X", Vector2{ -3822, 170 }, 70.0f, 3.0f, BLACK);
		// draw text --------------------------------------------------------------------------------------------------
		// draw lines -------------------------------------------------------------------------------------------------
			draw_down_arrow(-3800, -200, -3800, -30, BLACK);
			draw_right_arrow(-4000, 70, -3850, 70, BLACK);
			DrawLineEx(Vector2{ -4000, 70 }, Vector2{ -4000, -600 }, 5.0f, BLACK);
			DrawLineEx(Vector2{ -4000, -600 }, Vector2{ -2635, -600 }, 5.0f, BLACK);
			DrawLineEx(Vector2{ -2635, -600 }, Vector2{ -2635, -330 }, 5.0f, BLACK);
			DrawCircle(-2635, -330, 10.0f, BLACK);
			
			draw_right_arrow(-4100, 170, -3850, 170, BLACK);
			DrawLineEx(Vector2{ -4100, 170 }, Vector2{ -4100, -1250 }, 5.0f, BLACK);
			DrawLineEx(Vector2{ -4100, -1250 }, Vector2{ -765, -1250 }, 5.0f, BLACK);
			DrawLineEx(Vector2{ -765, -1250 }, Vector2{ -765, -435 }, 5.0f, BLACK);
			DrawLineEx(Vector2{ -765, -435 }, Vector2{ -912, -435 }, 5.0f, BLACK);
		// draw lines -------------------------------------------------------------------------------------------------
	// draw mux sector ----------------------------------------------------------------------------------------------

	// draw Branch sector -------------------------------------------------------------------------------------------
		DrawRectangleLinesEx(Rectangle{ -3900, -350, 200, 150 }, 5.0f, BLUE);
		DrawRectangle(-3900, -350, 200, 150, Fade(BLUE, 0.2f));
		// draw text --------------------------------------------------------------------------------------------------
			DrawTextEx(GetFontDefault(), "ID/EX", Vector2{ -3860, -320 }, 40.0f, 3.0f, BLUE);
			DrawTextEx(GetFontDefault(), "Branch", Vector2{ -3870, -270 }, 40.0f, 3.0f, BLUE);
		// draw text --------------------------------------------------------------------------------------------------
	// draw Branch sector -------------------------------------------------------------------------------------------
	(void) info;
	return (true);
}

bool	draw_instruction_decode(const Info &info) {
	// draw ALU sector ----------------------------------------------------------------------------------------------
		draw_trapezoid(-1150, -635, 200);
		// draw text --------------------------------------------------------------------------------------------------
			DrawTextEx(GetFontDefault(), "+", Vector2{ -975, -465 }, 70.0f, 3.0f, BLACK);
		// draw text --------------------------------------------------------------------------------------------------
		// draw lines -------------------------------------------------------------------------------------------------
			draw_right_arrow(-2200, -320, -1150, -320, BLACK);
			draw_right_arrow(-1300, -550, -1150, -550, BLACK);
		// draw lines -------------------------------------------------------------------------------------------------
	
		// draw shift left 2 sector -----------------------------------------------------------------------------------
			draw_circle_lines_ex(-1400, -550, 100, 5.0f, BLACK);
			// draw text --------------------------------------------------------------------------------------------------
				DrawTextEx(GetFontDefault(), "Shift", Vector2{ -1455, -610 }, 50.0f, 3.0f, BLACK);
				DrawTextEx(GetFontDefault(), "Left 2", Vector2{ -1470, -540 }, 50.0f, 3.0f, BLACK);
			// draw text --------------------------------------------------------------------------------------------------
			// draw line --------------------------------------------------------------------------------------------------
				draw_up_arrow(-1400, 855, -1400, -450, BLACK);
			// draw line --------------------------------------------------------------------------------------------------
		// draw shift left 2 sector -----------------------------------------------------------------------------------
	// draw ALU sector ----------------------------------------------------------------------------------------------

	// draw sign extend sector --------------------------------------------------------------------------------------
		draw_circle_lines_ex(-1400, 955, 100, 5.0f, BLACK);
		// draw text --------------------------------------------------------------------------------------------------
			DrawTextEx(GetFontDefault(), "Sign", Vector2{ -1445, 895 }, 50.0f, 3.0f, BLACK);
			DrawTextEx(GetFontDefault(), "Extend", Vector2{ -1480, 965 }, 50.0f, 3.0f, BLACK);
		// draw text --------------------------------------------------------------------------------------------------
		// draw line --------------------------------------------------------------------------------------------------
			DrawCircle(-2050, 955, 10, BLACK);
			DrawLineEx(Vector2{ -2050, 955 }, Vector2{ -1500, 955 }, 5.0f, BLACK);
		// draw line --------------------------------------------------------------------------------------------------
	// draw sign extend sector --------------------------------------------------------------------------------------

	// draw Registers sector ----------------------------------------------------------------------------------------
		DrawRectangleLinesEx(Rectangle{ -700, -250, 600, 950 }, 5.0f, BLACK);
		// draw text --------------------------------------------------------------------------------------------------
			DrawTextEx(GetFontDefault(), "Registers", Vector2{ -550, 185 }, 70.0f, 3.0f, BLACK);
			DrawTextEx(GetFontDefault(), "ReadReg1", Vector2{ -660, -210 }, 50.0f, 3.0f, BLACK);
			DrawTextEx(GetFontDefault(), "ReadData1", Vector2{ -380, -95 }, 50.0f, 3.0f, BLACK);
			DrawTextEx(GetFontDefault(), "ReadReg2", Vector2{ -660, 0 }, 50.0f, 3.0f, BLACK);
			DrawTextEx(GetFontDefault(), "WriteReg", Vector2{ -660, 400 }, 50.0f, 3.0f, BLACK);
			DrawTextEx(GetFontDefault(), "ReadData2", Vector2{ -390, 510 }, 50.0f, 3.0f, BLACK);
			DrawTextEx(GetFontDefault(), "WriteData", Vector2{ -660, 610 }, 50.0f, 3.0f, BLACK);
		// draw lines -------------------------------------------------------------------------------------------------
			DrawLineEx(Vector2{ -2200, 430, }, Vector2{ -2050, 430 }, 5.0f, BLACK);
			DrawCircle(-2050, -850, 10.0f, BLACK);
			DrawLineEx(Vector2{ -2050, -850 }, Vector2{ -2050, 1400 }, 5.0f, BLACK);
			DrawCircle(-2050, 430, 10.0f, BLACK);
			DrawCircle(-2050, -185, 10.0f, BLACK);
			draw_right_arrow(-2050, -185, -700, -185, BLACK);
			DrawCircle(-2050, 25, 10.0f, BLACK);
			draw_right_arrow(-2050, 25, -700, 25, BLACK);
			draw_right_arrow(-800, 210, -700, 210, BLACK);
			draw_right_arrow(-1150, 425, -700, 425, BLACK);
			draw_right_arrow(-940, 635, -700, 635, BLACK);
		
	// draw MEM/WB RegWrite sector ----------------------------------------------------------------------------------
		DrawRectangleLinesEx(Rectangle{ -1050, 135, 250, 150 }, 5.0f, BLUE);
		DrawRectangle(-1050, 135, 250, 150, Fade(BLUE, 0.2f));
		// draw text --------------------------------------------------------------------------------------------------
			DrawTextEx(GetFontDefault(), "MEM/WB", Vector2{ -1012, 165 }, 40.0f, 3.0f, BLUE);
			DrawTextEx(GetFontDefault(), "RegWrite", Vector2{ -1011, 215 }, 40.0f, 3.0f, BLUE);
		// draw text --------------------------------------------------------------------------------------------------
	// draw MEM/WB RegWrite sector ----------------------------------------------------------------------------------
	(void) info;
	return (true);
}

bool	draw_execute(const Info &info) {
	(void) info;
	return (true);
}

bool	draw_memory_access(const Info &info) {
	(void) info;
	return (true);
}

bool	draw_write_back(const Info &info) {
	(void) info;
	return (true);
}