<?php
/**
 * @file
 * sire_scrape.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sire_scrape_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sire_scrape_node_info() {
  $items = array(
    'agenda_html_link_content' => array(
      'name' => t('Agenda HTML Link Content'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Link URL'),
      'help' => '',
    ),
    'search_results_agenda_html_ifram' => array(
      'name' => t('Search Results Agenda HTML iFrame'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Meeting ID'),
      'help' => '',
    ),
    'sire_motion_details' => array(
      'name' => t('SIRE Motion Details'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Meeting ID'),
      'help' => '',
    ),
    'sire_search_results' => array(
      'name' => t('SIRE Search Results'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Meeting ID'),
      'help' => '',
    ),
    'sire_supporting_documents' => array(
      'name' => t('SIRE Supporting Documents'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Meeting ID'),
      'help' => '',
    ),
    'sire_voting_information' => array(
      'name' => t('SIRE Voting Information'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Meeting ID'),
      'help' => '',
    ),
  );
  return $items;
}
