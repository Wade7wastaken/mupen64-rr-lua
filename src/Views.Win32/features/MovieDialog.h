﻿/*
 * Copyright (c) 2025, Mupen64 maintainers, contributors, and original authors (Hacktarux, ShadowPrince, linker).
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#pragma once

namespace MovieDialog
{
    struct t_record_params {
        std::filesystem::path path;
        unsigned short start_flag;
        std::wstring author;
        std::wstring description;
        int32_t pause_at;
        int32_t pause_at_last;
    };

    /**
     * \brief Shows a movie inspector dialog
     * \param readonly Whether movie properties can't be edited
     * \return The user-chosen parameters
     */
    t_record_params show(bool readonly);
} // namespace MovieDialog
