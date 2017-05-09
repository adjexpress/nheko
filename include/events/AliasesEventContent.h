/*
 * nheko Copyright (C) 2017  Konstantinos Sideris <siderisk@auth.gr>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ALIASES_EVENT_CONTENT_H
#define ALIASES_EVENT_CONTENT_H

#include <QJsonValue>
#include <QList>

#include "Deserializable.h"

namespace matrix
{
namespace events
{
class AliasesEventContent : public Deserializable
{
public:
	void deserialize(const QJsonValue &data) override;

	inline QList<QString> aliases() const;

private:
	QList<QString> aliases_;
};

inline QList<QString> AliasesEventContent::aliases() const
{
	return aliases_;
}
}  // namespace events
}  // namespace matrix

#endif  // ALIASES_EVENT_CONTENT_H