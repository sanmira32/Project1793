/*
 * Copyright (c) 2016,2017 sanmira32 <matrix3sai@gmail.com>
 *
 *  This file is part of Project1793.
 *
 *  Project1793 is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Project1793 is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Project1793.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ROGUEAP_ATTACK_MODULE_H
#define ROGUEAP_ATTACK_MODULE_H

#include "../core/module_1793.h"

class RogueAP_Attack_module : public Module_1793
{
    Q_OBJECT
public:
    RogueAP_Attack_module();

public slots:
    void start_module();
    void terminate_module();
};

#endif // ROGUEAP_ATTACK_MODULE_H
