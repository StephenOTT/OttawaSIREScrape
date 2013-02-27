<?php
/**
 * @file
 * sire_scrape.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function sire_scrape_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sire_motion_details';
  $feeds_importer->config = array(
    'name' => 'SIRE Motion Details',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'MotionOutcomeAndDescription',
            'target' => 'field_motion_outcome_and_descrip',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'PageURL',
            'target' => 'field_page_url:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'MotionVoteOutcome',
            'target' => 'field_motion_vote_outcome',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'VideoTimeSlot',
            'target' => 'field_video_time_slot',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'ItemID',
            'target' => 'field_item_id',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'MeetingIDValue',
            'target' => 'title',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'MotionID',
            'target' => 'field_motion_id',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'MotionID',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'sire_motion_details',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sire_motion_details'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sire_search_results';
  $feeds_importer->config = array(
    'name' => 'SIRE Search Results',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'MeetID',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'MeetingName',
            'target' => 'field_meeting_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'DateTime',
            'target' => 'field_meeting_date_time:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Contact',
            'target' => 'field_meeting_contact_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'PageURL',
            'target' => 'field_search_results_page_url:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'AgendaHTML',
            'target' => 'field_meeting_agenda_html_link:url',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'AgendaPDF',
            'target' => 'field_meeting_agenda_pdf_link:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'ActionSummaryHTML',
            'target' => 'field_meeting_act_sum_html_link:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'ActionSummaryPDF',
            'target' => 'field_meeting_act_sum_pdf_link:url',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'MinutesHTML',
            'target' => 'field_meeting_minutes_html_link:url',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'MinutesPDF',
            'target' => 'field_meeting_minutes_pdf_link:url',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'VideoLink',
            'target' => 'field_meeting_video_link:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'sire_search_results',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sire_search_results'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sire_supporting_documents';
  $feeds_importer->config = array(
    'name' => 'SIRE Supporting Documents',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'SupportingDocURL',
            'target' => 'field_supporting_document_url:url',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'SupportingDocName',
            'target' => 'field_supporting_document_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'PageURL',
            'target' => 'field_page_url:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'SupportingMaterialDescription',
            'target' => 'field_supporting_document_descri',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'MeetingIDValue',
            'target' => 'title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'ItemID',
            'target' => 'field_item_id',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'FileID',
            'target' => 'field_file_id',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'FileID',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'sire_supporting_documents',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sire_supporting_documents'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sire_voting_information';
  $feeds_importer->config = array(
    'name' => 'SIRE Voting Information',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'VoterName',
            'target' => 'field_voter_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'VoterVote',
            'target' => 'field_voter_vote',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'PageURL',
            'target' => 'field_page_url:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'MotionofVote',
            'target' => 'field_motion_of_vote',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'NoVoteText',
            'target' => 'field_no_vote_text',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'MeetingIDValue',
            'target' => 'title',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'ItemID',
            'target' => 'field_item_id',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'VoteID',
            'target' => 'field_voteid',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'VoteID',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'sire_voting_information',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sire_voting_information'] = $feeds_importer;

  return $export;
}
