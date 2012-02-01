<?php
// $Id: api-example.html,v 1.2 2009/09/15 15:44:14 merlinofchaos Exp $ 

/**
 * This file is used to tell the views module about the new node_example table.
 *
 * Database definition:
 * @code
 *   CREATE TABLE node_example (
 *     vid int(10) unsigned NOT NULL default '0',
 *     nid int(10) unsigned NOT NULL default '0',
 *     color varchar(255) NOT NULL default '',
 *     quantity int(10) unsigned NOT NULL default '0',
 *     PRIMARY KEY (vid, nid),
 *     KEY `node_example_nid` (nid)
 *   )
 * @endcode
 */

function playerrater_views_data()  {
  // Basic table information.

  // ----------------------------------------------------------------
  // node_example table
  //  New group within Views called 'Example'
  //  The group will appear in the UI in the dropdown tha allows you
  //  to narrow down which fields and filters are available.

  $data = array();
  $data['playerrater']['table']['group']  = t('Player');

  // Let Views know that our example table joins to the 'node'
  // base table. This means it will be available when listing
  // nodes and automatically make its fields appear.
  //
  // We also show up for node revisions.
  $data['playerrater']['table']['join'] = array(
    'node_revisions' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );

  // ranking
  $data['playerrater']['ranking'] = array(
    'title' => t('Ranking'),
    'help' => t('ESPN Player Ranking'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // fgp
  $data['playerrater']['fgp'] = array(
    'title' => t('FGP'),
    'help' => t('Field Goal Percentage'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_float',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // ftp
  $data['playerrater']['ftp'] = array(
    'title' => t('FTP'),
    'help' => t('Free Throw Percentage'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_float',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // tpm
  $data['playerrater']['tpm'] = array(
    'title' => t('TPM'),
    'help' => t('Three Pointers Made'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_float',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // reb
  $data['playerrater']['reb'] = array(
    'title' => t('REB'),
    'help' => t('Rebounds'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_float',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

   // ast
  $data['playerrater']['ast'] = array(
    'title' => t('AST'),
    'help' => t('Assists'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_float',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // stl
  $data['playerrater']['stl'] = array(
    'title' => t('STL'),
    'help' => t('Steals'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_float',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // blk
  $data['playerrater']['blk'] = array(
    'title' => t('BLK'),
    'help' => t('Blocks'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_float',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // pts
  $data['playerrater']['pts'] = array(
    'title' => t('PTS'),
    'help' => t('Points'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_float',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // score
  $data['playerrater']['score'] = array(
    'title' => t('Score'),
    'help' => t('ESPN Fantasy Ranking'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_float',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  return $data;
}


