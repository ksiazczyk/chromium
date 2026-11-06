---
type: readme
title: Visited URL Ranking Component
summary: Describes the component that fetches and ranks aggregated user URL visit data from sources such as Tab Model, Session, and History, and links its fetcher interfaces and services.
relations:
  - documents /components/visited_url_ranking/internal/history_url_visit_data_fetcher.h
  - documents /components/visited_url_ranking/internal/session_url_visit_data_fetcher.h
---

# Visited URL Ranking Component

Component that facilitates fetching and ranking of aggregated user URL visit
data managed by different sources (e.g. Tab Model, Session, History).

## Visited URL Ranking services

There is a common interface to fulfill data fetching requirements:

* [URLVisitDataFetcher](/components/visited_url_ranking/public/url_visit_fetcher.h)
Common interface that facilitates fetching and aggregation of URL visit data
across different sources.

There are different services that fulfill different requirements:
* [SessionURLVisitDataFetcher](/components/visited_url_ranking/internal/session_url_visit_data_fetcher.h)
Service that facilitates fetching and aggregating data from the `session`
source.
* [HistoryURLVisitDataFetcher](/components/visited_url_ranking/internal/history_url_visit_data_fetcher.h)
Service that facilitates fetching and aggregating data from the `history`
source.
