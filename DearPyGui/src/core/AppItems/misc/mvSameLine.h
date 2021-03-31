#pragma once

#include "mvTypeBases.h"

namespace Marvel {

	PyObject* add_same_line(PyObject* self, PyObject* args, PyObject* kwargs);

	MV_REGISTER_WIDGET(mvSameLine);
	class mvSameLine : public mvAppItem
	{

	public:

		static void InsertParser(std::map<std::string, mvPythonParser>* parsers);

	public:

		MV_APPITEM_TYPE(mvAppItemType::mvSameLine, "add_same_line")

		MV_START_GENERAL_CONSTANTS
		MV_END_GENERAL_CONSTANTS

		MV_START_COLOR_CONSTANTS
		MV_END_COLOR_CONSTANTS

		MV_START_STYLE_CONSTANTS
		MV_END_STYLE_CONSTANTS

		mvSameLine(const std::string& name);

		void draw() override;

		void setExtraConfigDict(PyObject* dict) override;
		void getExtraConfigDict(PyObject* dict) override;

	private:

		float m_xoffset = 0.0f;
		float m_spacing = -1.0f;

	};

}