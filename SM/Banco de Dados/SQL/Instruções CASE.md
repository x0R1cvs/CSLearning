## INSTRUÇÃO CASE

2026-01-19 22:24

**Subjects**: [[sql]] | [[sqlite]]

**Source**: <a href="https://novatec.com.br/livros/introducao-sql/">Introdução à Linguagem SQL: Abordagem prática para iniciantes</a>

**Level**: Beginner

---

## Write-Up

```SQLite
select report_code, year,month, day, wind_speed,
CASE
	WHEN wind_speed > 40 THEN 'HIGH'
	WHEN wind_speed >= 30 AND wind_speed < 40 THEN 'MODERATE'
	ELSE 'LOW'
END AS Severity
from station_data;
```

```SQLite
select report_code, year,month, day, wind_speed,
CASE
	WHEN wind_speed > 40 THEN 'HIGH'
	WHEN wind_speed >= 30 THEN 'MODERATE'
	ELSE 'LOW'
END AS Severity
from station_data;
```

```SQLite
select

CASE

WHEN wind_speed >= 40 THEN 'HIGH'

WHEN wind_speed >= 30 THEN 'MODERATE'

ELSE 'LOW'

end as Severity,

count(*) as record_count

from station_data

group by 1

order by 2 desc;
```